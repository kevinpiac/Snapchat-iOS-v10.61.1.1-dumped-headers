//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaSerengetiViewControllerProvidingResult-Protocol.h"
#import "SCSerengetiViewControllerDelegate-Protocol.h"

@class NSString, SCSerengetiViewController;
@protocol SCOperaSerengetiViewControllerDelegate;

@interface SCSerengetiViewControllerOperaProviderResult : NSObject <SCSerengetiViewControllerDelegate, SCOperaSerengetiViewControllerProvidingResult>
{
    SCSerengetiViewController *_serengetiViewController;
    id <SCOperaSerengetiViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SCOperaSerengetiViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithLink:(id)arg1 userSession:(id)arg2 navigationDelegate:(id)arg3 delegate:(id)arg4;
- (id)scrollView;
- (void)serengetiViewController:(id)arg1 didUpdateScrollView:(id)arg2;
- (id)viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

