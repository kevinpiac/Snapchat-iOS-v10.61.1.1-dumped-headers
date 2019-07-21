//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSearchQuery, SCSearchQueryResultController, UIViewController;

@protocol SCSearchQueryResultControllerDelegate <NSObject>
- (UIViewController *)presentingViewControllerForSearchQueryResultController:(SCSearchQueryResultController *)arg1;
- (void)searchQueryResultController:(SCSearchQueryResultController *)arg1 willUpdateResultForQuery:(SCSearchQuery *)arg2 fromQuery:(SCSearchQuery *)arg3;
- (void)searchQueryResultControllerDidUpdateQueryResult:(SCSearchQueryResultController *)arg1;

@optional
- (void)searchQueryResultControllerDidDelayReloadFreshResult:(SCSearchQueryResultController *)arg1;
- (void)searchQueryResultControllerDidSkipUpdateQueryResult:(SCSearchQueryResultController *)arg1;
- (_Bool)searchQueryResultControllerShouldReloadFreshResult:(SCSearchQueryResultController *)arg1;
- (void)searchQueryResultControllerWantsReloadFreshResult:(SCSearchQueryResultController *)arg1;
@end
