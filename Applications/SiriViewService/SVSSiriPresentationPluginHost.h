//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSURL;

@interface SVSSiriPresentationPluginHost : NSObject
{
    _Bool _loaded;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSMutableDictionary *_bundleURLsByBundleIdentifier;	// 24 = 0x18
}

+ (id)sharedSiriPresentationPluginHost;	// IMP=0x00000001000312cc
+ (id)_defaultURL;	// IMP=0x0000000100031210
@property(readonly, nonatomic, getter=_bundleURLsByBundleIdentifier) NSMutableDictionary *bundleURLsByBundleIdentifier; // @synthesize bundleURLsByBundleIdentifier=_bundleURLsByBundleIdentifier;
@property(nonatomic, getter=_isLoaded, setter=_setLoaded:) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic, getter=_URL) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;	// IMP=0x00000001000329e8
- (void)_save;	// IMP=0x0000000100032728
- (void)_load;	// IMP=0x00000001000323a4
- (void)_loadFromPropertyListRepresentation:(id)arg1;	// IMP=0x000000010003203c
- (id)_propertyListRepresentation;	// IMP=0x0000000100031eb0
- (id)presentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x0000000100031d84
- (id)_siriPresentationPluginBundleWithIdentifier:(id)arg1;	// IMP=0x0000000100031c78
- (id)_cachedURLForBundleWithIdentifier:(id)arg1;	// IMP=0x0000000100031be0
- (void)_rescanBundles;	// IMP=0x0000000100031764
- (id)_builtInPresentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x000000010003162c
- (id)_classNameForBuiltInPresentationWithIdentifier:(id)arg1;	// IMP=0x00000001000314e0
- (id)init;	// IMP=0x000000010003147c
- (id)initWithURL:(id)arg1;	// IMP=0x00000001000313bc

@end
