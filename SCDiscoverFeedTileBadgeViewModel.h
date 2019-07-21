//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCDiscoverFeedTileBadgeViewLayoutConfiguration, UIImage;

@interface SCDiscoverFeedTileBadgeViewModel : NSObject <NSCopying>
{
    NSAttributedString *_title;
    UIImage *_icon;
    SCDiscoverFeedTileBadgeViewLayoutConfiguration *_layoutConfig;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 layoutConfig:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCDiscoverFeedTileBadgeViewLayoutConfiguration *layoutConfig; // @synthesize layoutConfig=_layoutConfig;
@property(readonly, copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;

@end
