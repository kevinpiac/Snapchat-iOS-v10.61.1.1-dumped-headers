//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLoginRegisterFlowContext, UINavigationController;
@protocol SCLegacyLogInWorkflowDelegate;

@interface SCLegacyLogInScope : NSObject
{
    UINavigationController *_navigationController;
    id <SCLegacyLogInWorkflowDelegate> _loginWorkflowDelegate;
    SCLoginRegisterFlowContext *_flowContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLoginRegisterFlowContext *flowContext; // @synthesize flowContext=_flowContext;
- (id)initWithNavigationController:(id)arg1 loginWorkflowDelegate:(id)arg2 flowContext:(id)arg3;
@property(readonly, nonatomic) __weak id <SCLegacyLogInWorkflowDelegate> loginWorkflowDelegate; // @synthesize loginWorkflowDelegate=_loginWorkflowDelegate;
@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;

@end

