//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCChatHamburgerTableSectionDataSource-Protocol.h"
#import "SCChatHamburgerTableSectionDelegate-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SCChatHamburgerContentView;

@interface SCChatHamburgerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SCChatHamburgerTableSectionDataSource, SCChatHamburgerTableSectionDelegate, SCShakeToReportDelegate>
{
    SCChatHamburgerContentView *_contentView;
    NSArray *_sections;
    NSMutableDictionary *_cacheNumberOfRowsInSection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cacheNumberOfRowsInSection; // @synthesize cacheNumberOfRowsInSection=_cacheNumberOfRowsInSection;
@property(readonly, nonatomic) SCChatHamburgerContentView *contentView; // @synthesize contentView=_contentView;
- (id)defaultProjectNameV2;
- (id)hamburgerTableSection:(id)arg1 dequeCellForReuseIdentifier:(id)arg2;
- (void)hamburgerTableSection:(id)arg1 insertCellAtIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)hamburgerTableSection:(id)arg1 reloadAllSectionsAnimated:(_Bool)arg2;
- (void)hamburgerTableSection:(id)arg1 reloadCellAtIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)hamburgerTableSection:(id)arg1 reloadSectionAnimated:(_Bool)arg2;
- (void)hamburgerTableSection:(id)arg1 removeCellAtIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)initWithSections:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void)setupSectionData:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

