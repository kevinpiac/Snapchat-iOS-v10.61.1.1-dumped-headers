//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSerengetiViewControllerFactory : NSObject
{
}

+ (id)_makeSerengetiViewControllerWithLink:(id)arg1 userSession:(id)arg2 delegate:(id)arg3 navigationDelegate:(id)arg4 dismissalDelegate:(id)arg5 inlineMode:(_Bool)arg6;
+ (id)inlineViewControllerWithLink:(id)arg1 userSesssion:(id)arg2 navigationDelegate:(id)arg3 delegate:(id)arg4;
+ (id)viewControllerWithLink:(id)arg1 userSession:(id)arg2 navigationDelegate:(id)arg3 embedInNavigationController:(_Bool)arg4;
+ (id)viewControllerWithLink:(id)arg1 userSession:(id)arg2 navigationDelegate:(id)arg3 embedInNavigationController:(_Bool)arg4 dismissalDelegate:(id)arg5;
+ (id)viewControllerWithURL:(id)arg1 userSession:(id)arg2 navigationDelegate:(id)arg3 embedInNavigationController:(_Bool)arg4;

@end

