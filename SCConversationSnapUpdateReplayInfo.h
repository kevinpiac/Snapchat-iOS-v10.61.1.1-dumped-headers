//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationSnapUpdateReplayInfo : NSObject <NSCopying>
{
    BOOL _replayType;
    NSString *_stackId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithReplayType:(BOOL)arg1 stackId:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL replayType; // @synthesize replayType=_replayType;
@property(readonly, copy, nonatomic) NSString *stackId; // @synthesize stackId=_stackId;

@end

