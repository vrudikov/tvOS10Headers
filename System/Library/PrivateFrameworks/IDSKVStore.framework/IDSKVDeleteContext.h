/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IDSKVStore.framework/IDSKVStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSKVDeleteContext : NSObject {

	char _valueType;
	unsigned long long _rowIDCutoff;

}

@property (assign,nonatomic) unsigned long long rowIDCutoff;              //@synthesize rowIDCutoff=_rowIDCutoff - In the implementation block
@property (assign,nonatomic) char valueType;                              //@synthesize valueType=_valueType - In the implementation block
-(char)valueType;
-(void)setValueType:(char)arg1 ;
-(unsigned long long)rowIDCutoff;
-(void)setRowIDCutoff:(unsigned long long)arg1 ;
@end
