//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCDiscoverFeedNotificationsActionDataModel : NSObject <NSCopying>
{
    unsigned long long _storyDedupeFp;
    unsigned long long _currentState;
    NSString *_displayName;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (unsigned long long)hash;
- (id)initWithStoryDedupeFp:(unsigned long long)arg1 currentState:(unsigned long long)arg2 displayName:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long storyDedupeFp; // @synthesize storyDedupeFp=_storyDedupeFp;

@end

