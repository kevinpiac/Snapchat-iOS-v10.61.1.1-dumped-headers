//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCLazy, SCSnapchatter, SCTempSnapchatter, SCUserSession, UIViewController;

@interface SCReportSnapchatterActionHandler : NSObject <SCActionHandling>
{
    SCUserSession *_userSession;
    SCSnapchatter *_snapchatter;
    SCTempSnapchatter *_tempSnapchatter;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_tempSnapchatterDataCoordinator;
    UIViewController *_presentingController;
}

- (void).cxx_destruct;
- (void)_presentViewController:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPresentingController:(id)arg1 userSession:(id)arg2 snapchatter:(id)arg3 snapchattersDataMutator:(id)arg4;
- (id)initWithPresentingController:(id)arg1 userSession:(id)arg2 snapchatter:(id)arg3 snapchattersDataMutator:(id)arg4 tempSnapchatter:(id)arg5 tempSnapchattersDataCooridnator:(id)arg6;
- (id)initWithPresentingController:(id)arg1 userSession:(id)arg2 tempSnapchatter:(id)arg3 tempSnapchattersDataCooridnator:(id)arg4;
@property(nonatomic) __weak UIViewController *presentingController; // @synthesize presentingController=_presentingController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

