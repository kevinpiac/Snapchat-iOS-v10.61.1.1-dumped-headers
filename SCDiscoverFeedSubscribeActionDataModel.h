//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchatter;

@interface SCDiscoverFeedSubscribeActionDataModel : NSObject <NSCopying>
{
    unsigned long long _storyDedupeFp;
    SCSnapchatter *_snapchatter;
    unsigned long long _currentState;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (unsigned long long)hash;
- (id)initWithStoryDedupeFp:(unsigned long long)arg1 snapchatter:(id)arg2 currentState:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
@property(readonly, nonatomic) unsigned long long storyDedupeFp; // @synthesize storyDedupeFp=_storyDedupeFp;

@end

