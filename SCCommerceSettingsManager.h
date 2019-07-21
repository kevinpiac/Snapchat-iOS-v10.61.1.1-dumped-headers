//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SCCommerceSettingsManager : NSObject <SCUserSessionScoped>
{
    NSMutableDictionary *_settings;
}

+ (id)_path;
+ (void)removeSavedState;
- (void).cxx_destruct;
- (void)_ensureNonNilObjects;
- (void)_subscribeForNotifications;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (int)incrementOutOfRegionNotificationViewsForStoreId:(id)arg1;
- (int)incrementProductDetailsPullUpAnimationViews;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (int)numberOfOutOfRegionNotificationViewsForStoreId:(id)arg1;
- (int)numberOfProductDetailsPullUpAnimationViews;
- (_Bool)saveState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

