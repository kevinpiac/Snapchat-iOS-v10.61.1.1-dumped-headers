//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "SCProductReviewOrderDetailTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SCUserSession, UITableView;
@protocol SCProductReviewOrderContainerViewCellDelegate;

@interface SCProductReviewOrderContainerViewCell : UITableViewCell <UITableViewDataSource, UITableViewDelegate, SCProductReviewOrderDetailTableViewCellDelegate>
{
    NSString *_storeId;
    SCUserSession *_userSession;
    NSArray *_lineItems;
    NSArray *_cellHeights;
    id <SCProductReviewOrderContainerViewCellDelegate> _delegate;
    UITableView *_tableView;
}

+ (id)cellHeightsForLineItems:(id)arg1;
- (void).cxx_destruct;
- (void)_initTable;
- (void)_scrollToTopOfCurrentlyVisibleCell;
- (void)_setupTableScroll;
@property(nonatomic) __weak id <SCProductReviewOrderContainerViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (int)indexOfItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 storeId:(id)arg3 userSession:(id)arg4;
- (void)productReviewOrderDetailTableViewCell:(id)arg1 didClickQuantityForItem:(id)arg2;
- (void)productReviewOrderDetailTableViewCell:(id)arg1 didClickRemoveItem:(id)arg2;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateCart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

