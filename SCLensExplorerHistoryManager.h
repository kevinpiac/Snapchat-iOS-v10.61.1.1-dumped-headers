//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString, SCQueuePerformer;
@protocol SCCache;

@interface SCLensExplorerHistoryManager : NSObject
{
    id <SCCache> _cache;
    NSDate *_expiration;
    NSString *_cacheKey;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_interactionHistory;
}

- (void).cxx_destruct;
- (void)appendInteractionHistoryWithHistory:(id)arg1;
- (id)initWithCache:(id)arg1 expiration:(id)arg2 cacheKey:(id)arg3;
- (id)interactionHistory;
- (id)interactionHistoryItemWithId:(id)arg1;
- (void)loadInteractionHistoryFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveInteractionHistoryToDisk;
- (void)updateInteractionHistoryItem:(id)arg1;
- (void)updateInteractionHistoryWithHistory:(id)arg1;
- (id)userRecentHistoryFuture;

@end

