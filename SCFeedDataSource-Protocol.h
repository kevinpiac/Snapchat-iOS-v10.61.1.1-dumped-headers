//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, NSString, SCCheetahFeedDebugManager;

@protocol SCFeedDataSource <NSObject>
@property(readonly, nonatomic) SCCheetahFeedDebugManager *debugManager;
- (long long)indexForFeedId:(NSString *)arg1;
- (void)updateForViewDidFullyDisappear;
- (NSArray *)viewModels;

@optional
- (_Bool)hasUpdatedViewModels;
- (void)resetFeedConversationsState;
- (void)resetFeedConversationsStateExcludingConversationId:(NSString *)arg1;
- (void)resetPaidToReplayStatesExcludingConversations:(NSSet *)arg1;
- (void)resumeViewModelUpdates;
- (void)searchWithText:(NSString *)arg1;
@property(nonatomic) _Bool searching;
@property(nonatomic) long long type;
@property(nonatomic) long long unreadConversationCount;
@end

