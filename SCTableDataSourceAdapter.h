//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTableDataSourceParent-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SCAbstractTableDataSource, UITableView;

@interface SCTableDataSourceAdapter : NSObject <SCTableDataSourceParent, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    SCAbstractTableDataSource *_dataSource;
    long long _batchCount;
    NSMutableArray *_insertions;
    NSMutableArray *_deletions;
    NSMutableArray *_moves;
    NSMutableArray *_reloads;
}

- (void).cxx_destruct;
- (id)child:(id)arg1 dequeueCellForReuseIdentifier:(id)arg2;
- (void)child:(id)arg1 didInsertItemAtIndex:(long long)arg2;
- (void)child:(id)arg1 didMoveItemAtIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)child:(id)arg1 didRemoveItemAtIndex:(long long)arg2;
- (void)child:(id)arg1 wantsReloadOfItemAtIndex:(long long)arg2;
- (void)childDidFinishBatchedChanges:(id)arg1;
- (void)childWillBeginBatchedChanges:(id)arg1;
- (void)configureForTableView:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)registerClass:(Class)arg1 forCellReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forCellReuseIdentifier:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

