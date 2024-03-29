//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCDiscoverFeedOnboardingTileViewModel, SCNetworkImage, UIColor;

@interface SCDiscoverFeedOnboardingAnimatedSelectionTileViewModel : NSObject <NSCopying>
{
    SCDiscoverFeedOnboardingTileViewModel *_tileViewModel;
    UIColor *_colorOverlay;
    SCNetworkImage *_logoImage;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *colorOverlay; // @synthesize colorOverlay=_colorOverlay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTileViewModel:(id)arg1 colorOverlay:(id)arg2 logoImage:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCNetworkImage *logoImage; // @synthesize logoImage=_logoImage;
@property(readonly, copy, nonatomic) SCDiscoverFeedOnboardingTileViewModel *tileViewModel; // @synthesize tileViewModel=_tileViewModel;

@end

