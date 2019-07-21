//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSearchVideoThumbnailExperimentContext : SCExperimentContext
{
    _Bool _shouldEnableVideoThumbnail;
    _Bool _shouldEnableVideoThumbnailSmartLoading;
    unsigned long long _numberOfVideoThumbnails;
}

- (id)experimentName;
@property(readonly, nonatomic) unsigned long long numberOfVideoThumbnails; // @synthesize numberOfVideoThumbnails=_numberOfVideoThumbnails;
- (void)setupParameters;
@property(readonly, nonatomic) _Bool shouldEnableVideoThumbnail; // @synthesize shouldEnableVideoThumbnail=_shouldEnableVideoThumbnail;
@property(readonly, nonatomic) _Bool shouldEnableVideoThumbnailSmartLoading; // @synthesize shouldEnableVideoThumbnailSmartLoading=_shouldEnableVideoThumbnailSmartLoading;

@end
