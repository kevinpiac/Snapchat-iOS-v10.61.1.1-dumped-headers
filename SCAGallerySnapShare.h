//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAGalleryBrowseSnapBase.h"

@class NSString;

@interface SCAGallerySnapShare : SCAGalleryBrowseSnapBase
{
    NSString *filterLensId;
    NSString *lensOptionId;
    NSString *shareChannel;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterLensId;
- (id)getLensOptionId;
- (double)getPerUserSamplingRate;
- (id)getShareChannel;
- (void)setFilterLensId:(id)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setShareChannel:(id)arg1;

@end

