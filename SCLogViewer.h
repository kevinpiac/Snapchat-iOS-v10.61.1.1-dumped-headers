//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSSet, NSString, SCLineGraphView, SCLogViewerAnchorView, SCLogViewerButton, UIButton, UITableView, UITextField, UIView;

@interface SCLogViewer : NSObject <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, UITextFieldDelegate>
{
    UIView *_containerView;
    UIView *_headerView;
    UIButton *_clearButton;
    UITextField *_filterTextField;
    UITableView *_tableView;
    NSMutableArray *_allEvents;
    NSMutableArray *_filteredEvents;
    NSIndexPath *_selectedIndexPath;
    SCLogViewerAnchorView *_resizeAnchor;
    _Bool _isMinimized;
    struct CGSize _currentSize;
    unsigned long long _maxEventsCount;
    long long _enabledLogTypes;
    NSString *_blacklistedBlizzardEventsString;
    NSSet *_blacklistedBlizzardEvents;
    SCLineGraphView *_lineGraphView;
    NSMutableArray *_allChartPoints;
    _Bool _isShowingLineGraphView;
    SCLogViewerButton *_minimizeButton;
}

+ (_Bool)isInitialized;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_bringContainerViewToFront;
- (id)_events;
- (void)_filterDidChange:(id)arg1;
- (void)_minimize;
- (void)_resizeWindow:(id)arg1;
- (struct CGRect)_restorePosition;
- (void)_savePosition:(struct CGRect)arg1;
- (void)_setupLayoutConstraints;
- (void)addLogType:(long long)arg1;
- (void)appendLog:(id)arg1 logType:(long long)arg2;
- (void)appendLog:(id)arg1 parameters:(id)arg2 logType:(long long)arg3;
- (void)appendLog:(id)arg1 parameters:(id)arg2 logType:(long long)arg3 textColor:(id)arg4;
- (void)appendNewLineGraphDiscreteEvent:(id)arg1 logType:(long long)arg2;
- (void)appendNewLineGraphPoint:(id)arg1 logType:(long long)arg2;
- (id)blizzardBlacklist;
- (void)clear;
- (void)clearLogType:(long long)arg1;
- (_Bool)containsLogType:(long long)arg1;
- (_Bool)hidden;
- (void)hide;
- (id)init;
- (_Bool)isEnabledFor:(long long)arg1;
- (void)removeLogType:(long long)arg1;
- (void)show;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateBlizzardBlacklist:(id)arg1;
- (void)updateLog:(id)arg1 parameters:(id)arg2 logType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
