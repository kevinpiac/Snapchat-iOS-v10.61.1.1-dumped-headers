//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPassportPlacesActions-Protocol.h"

@class NSString;
@protocol SCMapPassportContextSessionProvider, SCMapPassportPlacesActionHandlerDelegate;

@interface SCMapPassportPlacesActionHandler : NSObject <SCMapPassportPlacesActions>
{
    id <SCMapPassportContextSessionProvider> _contextSessionProvider;
    id <SCMapPassportPlacesActionHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)didScrollPlacesWithOffset:(double)arg1;
- (void)didTapBack;
- (void)didTapMemory;
- (void)didTapPlaceWithEntry:(id)arg1;
- (id)initWithContextSessionProvider:(id)arg1 delegate:(id)arg2;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

