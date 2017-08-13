//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVHSUtilities : NSObject
{
}

+ (id)_filteredDataItemsFromDataItems:(id)arg1 filterOutVideos:(_Bool)arg2;	// IMP=0x0000000100029954
+ (long long)placeholderAssetTypeForDataItem:(id)arg1;	// IMP=0x0000000100029850
+ (id)connectionFailedAlertViewControllerForDataClient:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000295d8
+ (id)nonVideoContentDataItemsFromDataItems:(id)arg1;	// IMP=0x00000001000295c8
+ (id)videoContentDataItemsFromDataItems:(id)arg1;	// IMP=0x00000001000295b8
+ (id)dataItemsSortedByDateReleased:(id)arg1;	// IMP=0x000000010002952c
+ (CDUnknownBlockType)dataItemsDescendingDateReleasedSortComparator;	// IMP=0x0000000100029438
+ (CDUnknownBlockType)dataItemsAscendingDateReleasedSortComparator;	// IMP=0x0000000100029274
+ (id)dataServersSortedByName:(id)arg1;	// IMP=0x0000000100029170
+ (id)dataServers;	// IMP=0x0000000100029158
+ (id)browseableDataServers;	// IMP=0x0000000100029140
+ (id)imageProxiesForObjects:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x0000000100028f78
+ (id)imageProxyForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x0000000100028e20
+ (id)fullSizeImageProxiesForObjects:(id)arg1;	// IMP=0x0000000100028e04
+ (id)fullSizeImageProxyForObject:(id)arg1;	// IMP=0x0000000100028de8
+ (id)previewImageProxiesForObjects:(id)arg1;	// IMP=0x0000000100028dcc
+ (id)previewImageProxyForObject:(id)arg1;	// IMP=0x0000000100028db0

@end

