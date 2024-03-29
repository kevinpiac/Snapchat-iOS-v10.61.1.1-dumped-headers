//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SOJUGallerySnapOverlay, SOJUSnapCreatorAttribution;

@interface SCMediaPackageEditInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _isInfiniteDuration;
    SOJUGallerySnapOverlay *_overlay;
    double _timeScale;
    SOJUSnapCreatorAttribution *_snapCreatorAttribution;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOverlay:(id)arg1 timeScale:(double)arg2 isInfiniteDuration:(_Bool)arg3 snapCreatorAttribution:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isInfiniteDuration; // @synthesize isInfiniteDuration=_isInfiniteDuration;
@property(readonly, copy, nonatomic) SOJUGallerySnapOverlay *overlay; // @synthesize overlay=_overlay;
@property(readonly, copy, nonatomic) SOJUSnapCreatorAttribution *snapCreatorAttribution; // @synthesize snapCreatorAttribution=_snapCreatorAttribution;
@property(readonly, nonatomic) double timeScale; // @synthesize timeScale=_timeScale;

@end

