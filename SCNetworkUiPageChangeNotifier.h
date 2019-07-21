//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesUiPageChangeNotifier-Protocol.h"

@class NSMutableArray, SCDisplayContext;
@protocol SCPerforming;

@interface SCNetworkUiPageChangeNotifier : NSObject <SCNNetworkTypesUiPageChangeNotifier>
{
    id <SCPerforming> _queuePerformer;
    NSMutableArray *_listeners;
    SCDisplayContext *_displayContext;
}

- (void).cxx_destruct;
@property(retain) SCDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
- (id)initWithDefaultDisplayContext:(id)arg1 queuePerformer:(id)arg2;
- (void)notifyListener:(id)arg1;
- (id)registerListener:(id)arg1;
- (void)updateDisplayContext:(id)arg1;

@end

