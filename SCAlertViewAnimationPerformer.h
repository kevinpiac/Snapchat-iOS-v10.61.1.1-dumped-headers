//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCAlertViewAnimationPerformer : NSObject
{
}

+ (void)dismissView:(id)arg1 withDismissalType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)performDefaultDismissalForAlertView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)performDefaultPresentationForAlertView:(id)arg1 inView:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)performFlowDismissalForAlertView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)performFlowPresentationForAlertView:(id)arg1 inView:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)performNoAnimationDismissalForAlertView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)performNoAnimationPresentationForAlertView:(id)arg1 inView:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)presentView:(id)arg1 inView:(id)arg2 withPresentationType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

