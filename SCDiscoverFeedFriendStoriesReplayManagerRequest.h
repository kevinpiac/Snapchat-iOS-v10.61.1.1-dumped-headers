//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCDiscoverFeedFriendStoriesReplayManagerRequest : NSObject <NSCopying, NSCoding>
{
    unsigned long long _subtype;
    NSString *_addStory_storyId;
    long long _addStory_reason;
    long long _clearAll_reason;
}

+ (id)addStoryWithStoryId:(id)arg1 reason:(long long)arg2;
+ (id)clearAllWithReason:(long long)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchAddStory:(CDUnknownBlockType)arg1 clearAll:(CDUnknownBlockType)arg2;

@end

