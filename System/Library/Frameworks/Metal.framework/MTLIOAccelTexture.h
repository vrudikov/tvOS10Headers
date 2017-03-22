/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIOAccelResource.h>

@class MTLIOAccelBuffer, MTLIOAccelResource;

@interface MTLIOAccelTexture : MTLIOAccelResource {

	MTLIOAccelTexture* _parentTexture;
	unsigned long long _parentRelativeLevel;
	unsigned long long _parentRelativeSlice;
	MTLIOAccelBuffer* _buffer;
	unsigned long long _bufferOffset;
	unsigned long long _bufferBytesPerRow;
	unsigned long long _swizzle;
	MTLIOAccelBuffer* _masterBuffer;
	IOSurfaceRef _iosurface;
	unsigned long long _iosurfacePlane;
	unsigned long long _textureType;
	unsigned long long _pixelFormat;
	unsigned long long _usage;
	unsigned long long _rotation;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _depth;
	unsigned long long _mipmapLevelCount;
	unsigned long long _sampleCount;
	unsigned long long _arrayLength;
	unsigned long long _numFaces;
	BOOL _framebufferOnly;
	BOOL _isDrawable;
	BOOL _rootResourceIsSuballocatedBuffer;
	short _masterHeapIndex;
	short _masterBufferIndex;
	int _masterBufferOffset;
	unsigned long long _length;
	void* _pointer;
	/*^block*/id _deallocator;

}

@property (readonly) MTLIOAccelResource * rootResource; 
@property (readonly) MTLIOAccelTexture * parentTexture;                          //@synthesize parentTexture=_parentTexture - In the implementation block
@property (readonly) unsigned long long parentRelativeLevel;                     //@synthesize parentRelativeLevel=_parentRelativeLevel - In the implementation block
@property (readonly) unsigned long long parentRelativeSlice;                     //@synthesize parentRelativeSlice=_parentRelativeSlice - In the implementation block
@property (readonly) MTLIOAccelBuffer * buffer;                                  //@synthesize buffer=_buffer - In the implementation block
@property (readonly) unsigned long long bufferOffset;                            //@synthesize bufferOffset=_bufferOffset - In the implementation block
@property (readonly) unsigned long long bufferBytesPerRow;                       //@synthesize bufferBytesPerRow=_bufferBytesPerRow - In the implementation block
@property (readonly) IOSurfaceRef iosurface;                                     //@synthesize iosurface=_iosurface - In the implementation block
@property (readonly) unsigned long long iosurfacePlane;                          //@synthesize iosurfacePlane=_iosurfacePlane - In the implementation block
@property (readonly) unsigned long long rotation;                                //@synthesize rotation=_rotation - In the implementation block
@property (readonly) unsigned long long swizzle;                                 //@synthesize swizzle=_swizzle - In the implementation block
@property (readonly) unsigned long long textureType;                             //@synthesize textureType=_textureType - In the implementation block
@property (readonly) unsigned long long pixelFormat;                             //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (readonly) unsigned long long usage;                                   //@synthesize usage=_usage - In the implementation block
@property (readonly) unsigned long long width;                                   //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                                  //@synthesize height=_height - In the implementation block
@property (readonly) unsigned long long depth;                                   //@synthesize depth=_depth - In the implementation block
@property (readonly) unsigned long long mipmapLevelCount;                        //@synthesize mipmapLevelCount=_mipmapLevelCount - In the implementation block
@property (readonly) unsigned long long sampleCount;                             //@synthesize sampleCount=_sampleCount - In the implementation block
@property (readonly) unsigned long long arrayLength;                             //@synthesize arrayLength=_arrayLength - In the implementation block
@property (readonly) unsigned long long numFaces;                                //@synthesize numFaces=_numFaces - In the implementation block
@property (getter=isFramebufferOnly,readonly) BOOL framebufferOnly;              //@synthesize framebufferOnly=_framebufferOnly - In the implementation block
@property (readonly) BOOL isDrawable;                                            //@synthesize isDrawable=_isDrawable - In the implementation block
@property (readonly) BOOL rootResourceIsSuballocatedBuffer;                      //@synthesize rootResourceIsSuballocatedBuffer=_rootResourceIsSuballocatedBuffer - In the implementation block
+(void)initNewTextureDataWithDevice:(id)arg1 descriptor:(id)arg2 sysMemSize:(unsigned)arg3 sysMemRowBytes:(unsigned)arg4 vidMemSize:(unsigned)arg5 vidMemRowBytes:(unsigned)arg6 args:(IOAccelNewResourceArgs*)arg7 ;
-(id)initWithTextureInternal:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(NSRange)arg4 slices:(NSRange)arg5 swizzle:(unsigned long long)arg6 compressedView:(BOOL)arg7 ;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 sysMemOffset:(unsigned)arg3 sysMemRowBytes:(unsigned)arg4 vidMemSize:(unsigned)arg5 vidMemRowBytes:(unsigned)arg6 args:(IOAccelNewResourceArgs*)arg7 argsSize:(unsigned)arg8 isStrideTexture:(BOOL)arg9 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 sysMemSize:(unsigned)arg3 sysMemRowBytes:(unsigned)arg4 vidMemSize:(unsigned)arg5 vidMemRowBytes:(unsigned)arg6 args:(IOAccelNewResourceArgs*)arg7 argsSize:(unsigned)arg8 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 sysMemPointer:(void*)arg3 sysMemSize:(unsigned)arg4 sysMemLength:(unsigned)arg5 sysMemRowBytes:(unsigned)arg6 args:(IOAccelNewResourceArgs*)arg7 argsSize:(unsigned)arg8 deallocator:(/*^block*/id)arg9 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 iosurface:(IOSurfaceRef)arg3 plane:(unsigned)arg4 field:(unsigned)arg5 args:(IOAccelNewResourceArgs*)arg6 argsSize:(unsigned)arg7 ;
-(id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 ;
-(id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(NSRange)arg4 slices:(NSRange)arg5 ;
-(id)initWithCompressedTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 level:(unsigned long long)arg4 slice:(unsigned long long)arg5 ;
-(id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(NSRange)arg4 slices:(NSRange)arg5 swizzle:(unsigned long long)arg6 ;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 sysMemOffset:(unsigned)arg3 sysMemRowBytes:(unsigned)arg4 vidMemSize:(unsigned)arg5 vidMemRowBytes:(unsigned)arg6 args:(IOAccelNewResourceArgs*)arg7 argsSize:(unsigned)arg8 ;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 offset:(unsigned)arg3 bytesPerRow:(unsigned)arg4 ;
-(id)initWithHeap:(id)arg1 resource:(id)arg2 offset:(unsigned)arg3 length:(unsigned)arg4 device:(id)arg5 descriptor:(id)arg6 ;
-(id)initWithMasterBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(unsigned long long)arg5 descriptor:(id)arg6 sysMemRowBytes:(unsigned)arg7 vidMemSize:(unsigned)arg8 vidMemRowBytes:(unsigned)arg9 args:(IOAccelNewResourceArgs*)arg10 argsSize:(unsigned)arg11 ;
-(void)copyFromSlice:(unsigned long long)arg1 mipmapLevel:(unsigned long long)arg2 origin:(SCD_Struct_MT13)arg3 size:(SCD_Struct_MT13)arg4 toPixels:(void*)arg5 rowBytes:(unsigned long long)arg6 imageBytes:(unsigned long long)arg7 ;
-(void)copyFromPixels:(const void*)arg1 rowBytes:(unsigned long long)arg2 imageBytes:(unsigned long long)arg3 toSlice:(unsigned long long)arg4 mipmapLevel:(unsigned long long)arg5 origin:(SCD_Struct_MT13)arg6 size:(SCD_Struct_MT13)arg7 ;
-(CFArrayRef)copyAnnotations;
-(unsigned long long)iosurfacePlane;
-(unsigned long long)swizzle;
-(BOOL)rootResourceIsSuballocatedBuffer;
-(BOOL)isDrawable;
-(IOSurfaceRef)iosurface;
-(void)dealloc;
-(id)description;
-(unsigned long long)sampleCount;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)rotation;
-(unsigned long long)textureType;
-(MTLIOAccelBuffer *)buffer;
-(unsigned long long)pixelFormat;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(SCD_Struct_MT15)arg3 mipmapLevel:(unsigned long long)arg4 ;
-(void)replaceRegion:(SCD_Struct_MT15)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4 ;
-(unsigned long long)mipmapLevelCount;
-(unsigned long long)depth;
-(unsigned long long)usage;
-(MTLIOAccelResource *)rootResource;
-(MTLIOAccelTexture *)parentTexture;
-(unsigned long long)parentRelativeLevel;
-(unsigned long long)parentRelativeSlice;
-(unsigned long long)bufferOffset;
-(unsigned long long)bufferBytesPerRow;
-(unsigned long long)arrayLength;
-(BOOL)isFramebufferOnly;
-(void)makeAliasable;
-(BOOL)isAliasable;
-(unsigned long long)numFaces;
@end
