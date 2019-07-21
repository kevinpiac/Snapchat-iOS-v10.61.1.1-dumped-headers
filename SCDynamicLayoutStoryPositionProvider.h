//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedStoryPositionProviding-Protocol.h"

@class NSArray, NSString;
@protocol SCDiscoverFeedDataFetching;

@interface SCDynamicLayoutStoryPositionProvider : NSObject <SCDiscoverFeedStoryPositionProviding>
{
    NSArray *_feedTypes;
    id <SCDiscoverFeedDataFetching> _discoverFeedDataFetching;
}

- (void).cxx_destruct;
- (id)initWithFeedTypes:(id)arg1 discoverFeedDataFetcher:(id)arg2;
- (unsigned long long)itemIndexForStory:(id)arg1 inFeedType:(unsigned long long)arg2;
- (unsigned long long)sectionIndexForSectionKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

