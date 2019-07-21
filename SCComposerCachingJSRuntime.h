//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCComposerJSRuntime-Protocol.h"

@class NSMutableDictionary, NSString, SCNComposerJSRuntime;

@interface SCComposerCachingJSRuntime : NSObject <SCComposerJSRuntime>
{
    SCNComposerJSRuntime *_jsRuntime;
    NSMutableDictionary *_jsModules;
}

- (void).cxx_destruct;
- (void)_handleModuleDidUnloadWithKey:(id)arg1;
- (id)getJsModuleWithBundleName:(id)arg1 modulePath:(id)arg2;
- (id)getProperty:(id)arg1 withBundleName:(id)arg2 modulePath:(id)arg3;
- (id)initWithJSRuntime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

