//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NavigationDelegate;

@interface SCLensExplorerSnapProUnlock : NSObject
{
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (id)initWithNavigationDelegate:(id)arg1;
- (void)presentLensExplorerFromViewController:(id)arg1 entryPoint:(long long)arg2;
- (void)unlockLensWithActionDataModel:(id)arg1;

@end

