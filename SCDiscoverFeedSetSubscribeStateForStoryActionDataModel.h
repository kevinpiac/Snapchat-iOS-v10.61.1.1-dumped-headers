//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCDiscoverFeedSectionKey, SCDiscoverFeedStory;

@interface SCDiscoverFeedSetSubscribeStateForStoryActionDataModel : NSObject <NSCopying>
{
    _Bool _subscribeState;
    SCDiscoverFeedStory *_story;
    SCDiscoverFeedSectionKey *_sectionKey;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithStory:(id)arg1 subscribeState:(_Bool)arg2 sectionKey:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCDiscoverFeedSectionKey *sectionKey; // @synthesize sectionKey=_sectionKey;
@property(readonly, copy, nonatomic) SCDiscoverFeedStory *story; // @synthesize story=_story;
@property(readonly, nonatomic) _Bool subscribeState; // @synthesize subscribeState=_subscribeState;

@end

