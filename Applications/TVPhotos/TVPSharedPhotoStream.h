//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVSDataCollection.h"

@class ACAccount, MSASAlbum;

@interface TVPSharedPhotoStream : TVSDataCollection
{
    MSASAlbum *_album;	// 8 = 0x8
    ACAccount *_appleAccount;	// 16 = 0x10
}

+ (id)collectionWithDataClient:(id)arg1 album:(id)arg2 accessObject:(id)arg3;	// IMP=0x000000010002457c
+ (id)collectionTypeForAlbum:(id)arg1;	// IMP=0x00000001000244e0
@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount=_appleAccount;
@property(retain, nonatomic) MSASAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;	// IMP=0x0000000100024df8
- (id)concreteValueForProperty:(id)arg1;	// IMP=0x0000000100024b48
- (id)initWithDataClient:(id)arg1 album:(id)arg2 appleAccount:(id)arg3;	// IMP=0x0000000100024a68
- (id)initWithDataClient:(id)arg1;	// IMP=0x0000000100024a50

@end

