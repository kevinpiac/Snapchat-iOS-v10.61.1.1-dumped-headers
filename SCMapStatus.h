//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCMapBitmojiSticker, SCMapEffect, SCMapStatusConstraint;

@interface SCMapStatus : NSObject <NSCopying>
{
    _Bool _maybeLive;
    NSString *_identifier;
    double _timestamp;
    NSString *_userId;
    NSArray *_locations;
    SCMapBitmojiSticker *_sticker;
    NSString *_locality;
    long long _pathStyle;
    long long _animationStyle;
    SCMapEffect *_mapEffect;
    NSString *_speechText;
    NSString *_placeId;
    SCMapStatusConstraint *_liveConstraint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long animationStyle; // @synthesize animationStyle=_animationStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 timestamp:(double)arg2 userId:(id)arg3 locations:(id)arg4 sticker:(id)arg5 locality:(id)arg6 pathStyle:(long long)arg7 animationStyle:(long long)arg8 mapEffect:(id)arg9 speechText:(id)arg10 placeId:(id)arg11 maybeLive:(_Bool)arg12 liveConstraint:(id)arg13;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCMapStatusConstraint *liveConstraint; // @synthesize liveConstraint=_liveConstraint;
@property(readonly, copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(readonly, copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, copy, nonatomic) SCMapEffect *mapEffect; // @synthesize mapEffect=_mapEffect;
@property(readonly, nonatomic) _Bool maybeLive; // @synthesize maybeLive=_maybeLive;
@property(readonly, nonatomic) long long pathStyle; // @synthesize pathStyle=_pathStyle;
@property(readonly, copy, nonatomic) NSString *placeId; // @synthesize placeId=_placeId;
@property(readonly, copy, nonatomic) NSString *speechText; // @synthesize speechText=_speechText;
@property(readonly, copy, nonatomic) SCMapBitmojiSticker *sticker; // @synthesize sticker=_sticker;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end

