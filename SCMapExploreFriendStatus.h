//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCMapBitmojiSticker, SCMapEffect, SCMapPerson, SCMapPersonStatusConstraint;

@interface SCMapExploreFriendStatus : NSObject <NSCopying>
{
    _Bool _maybeLive;
    NSString *_identifier;
    double _timestamp;
    SCMapPerson *_person;
    NSArray *_locations;
    NSString *_locality;
    SCMapBitmojiSticker *_sticker;
    unsigned long long _pathStyle;
    unsigned long long _animationStyle;
    SCMapEffect *_mapEffect;
    NSString *_speechText;
    NSString *_placeId;
    SCMapPersonStatusConstraint *_liveConstraint;
}

+ (id)friendStatusWithProtobuf:(id)arg1 statusType:(int)arg2 person:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long animationStyle; // @synthesize animationStyle=_animationStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 timestamp:(double)arg2 person:(id)arg3 locations:(id)arg4 locality:(id)arg5 sticker:(id)arg6 pathStyle:(unsigned long long)arg7 animationStyle:(unsigned long long)arg8 mapEffect:(id)arg9 speechText:(id)arg10 placeId:(id)arg11 maybeLive:(_Bool)arg12 liveConstraint:(id)arg13;
- (_Bool)isCurrentlyLiveAtCoordinate:(struct CLLocationCoordinate2D)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isMaybeLive) _Bool maybeLive; // @synthesize maybeLive=_maybeLive;
@property(readonly, copy, nonatomic) SCMapPersonStatusConstraint *liveConstraint; // @synthesize liveConstraint=_liveConstraint;
@property(readonly, copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(readonly, copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, copy, nonatomic) SCMapEffect *mapEffect; // @synthesize mapEffect=_mapEffect;
@property(readonly, nonatomic) unsigned long long pathStyle; // @synthesize pathStyle=_pathStyle;
@property(readonly, copy, nonatomic) SCMapPerson *person; // @synthesize person=_person;
@property(readonly, copy, nonatomic) NSString *placeId; // @synthesize placeId=_placeId;
@property(readonly, copy, nonatomic) NSString *speechText; // @synthesize speechText=_speechText;
@property(readonly, copy, nonatomic) SCMapBitmojiSticker *sticker; // @synthesize sticker=_sticker;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

@end

