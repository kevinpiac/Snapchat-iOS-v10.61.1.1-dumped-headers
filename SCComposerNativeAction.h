//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCComposerAction-Protocol.h"

@class NSString, SCComposerActionHandlerHolder;

@interface SCComposerNativeAction : NSObject <SCComposerAction>
{
    NSString *_messageSelectorName;
    SCComposerActionHandlerHolder *_actionHandlerHolder;
}

- (void).cxx_destruct;
- (void)_doPerformWithParameters:(id)arg1;
- (id)initWithSelectorName:(id)arg1 actionHandlerHolder:(id)arg2;
- (id)performWithParameters:(id)arg1;
- (void)performWithSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

