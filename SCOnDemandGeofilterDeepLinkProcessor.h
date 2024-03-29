//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDeepLinkProcessor-Protocol.h"

@class NSString;
@protocol NavigationDelegate;

@interface SCOnDemandGeofilterDeepLinkProcessor : NSObject <SCDeepLinkProcessor>
{
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 additionalInfo:(id)arg3;
- (id)initWithNavigationDelegate:(id)arg1;
- (_Bool)needsNavigationDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

