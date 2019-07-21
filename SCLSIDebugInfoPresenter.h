//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLSIDebugInfoPresenter-Protocol.h"

@class NSString, UIButton, UIView;
@protocol SCLSIDebugInfoPresenterDelegate;

@interface SCLSIDebugInfoPresenter : NSObject <SCLSIDebugInfoPresenter>
{
    UIView *_parentView;
    UIButton *_debugInfoButton;
    id <SCLSIDebugInfoPresenterDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_addDebugInfoButtonIfNecessary;
- (void)_didTapDebugInfo:(id)arg1;
@property(readonly, nonatomic) __weak id <SCLSIDebugInfoPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideDebugInfoEntryUI;
- (id)initWithDelegate:(id)arg1 parentView:(id)arg2;
- (_Bool)isPointInsideDebugInfoUI:(struct CGPoint)arg1;
- (void)showDebugInfoEntryUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
