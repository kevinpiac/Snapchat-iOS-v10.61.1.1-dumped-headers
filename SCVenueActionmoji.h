//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCVenueActionmoji : NSObject <NSCopying>
{
    _Bool _shadow;
    NSString *_actionId;
    NSString *_nonClusterableStickerId;
    NSString *_leftFacingStickerId;
    NSString *_rightFacingStickerId;
}

+ (id)actionmojiWithStickerOption:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionId; // @synthesize actionId=_actionId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic, getter=hasShadow) _Bool shadow; // @synthesize shadow=_shadow;
- (unsigned long long)hash;
- (id)initWithActionId:(id)arg1 nonClusterableStickerId:(id)arg2 leftFacingStickerId:(id)arg3 rightFacingStickerId:(id)arg4 hasShadow:(_Bool)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *leftFacingStickerId; // @synthesize leftFacingStickerId=_leftFacingStickerId;
@property(readonly, copy, nonatomic) NSString *nonClusterableStickerId; // @synthesize nonClusterableStickerId=_nonClusterableStickerId;
@property(readonly, copy, nonatomic) NSString *rightFacingStickerId; // @synthesize rightFacingStickerId=_rightFacingStickerId;

@end
