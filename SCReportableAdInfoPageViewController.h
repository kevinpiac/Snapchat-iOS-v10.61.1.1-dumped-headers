//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAdInfoPageViewController.h"

#import "SCReportPageViewControllerDelegate-Protocol.h"

@class NSString;
@protocol SCReportPageViewControllerDelegate;

@interface SCReportableAdInfoPageViewController : SCAdInfoPageViewController <SCReportPageViewControllerDelegate>
{
    id <SCReportPageViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_populateAdditionalAdData:(id)arg1;
- (_Bool)_shouldDisplayReportAction;
- (_Bool)_shouldHandleReportEvent;
@property(nonatomic) __weak id <SCReportPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadView;
- (void)presentReportAd;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

