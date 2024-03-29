//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPostCaptureLensComponentManagerPool-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableArray, NSString, SCLensDownloadableContent;

@interface SCPostCaptureLensComponentManagerPool : NSObject <SCTraceEnabled, SCPostCaptureLensComponentManagerPool>
{
    SCLensDownloadableContent *_lensDownloadableContent;
    _Bool _trackingEnabled;
    long long _poolSize;
    NSMutableArray *_componentManagersPool;
    NSString *_componentManagersCacheContextId;
}

- (void).cxx_destruct;
- (void)_invalidateCoreManagersPool:(id)arg1;
- (id)_newLensComponentManagerForImageProcessContext:(id)arg1;
- (void)clearPool;
- (void)dealloc;
- (id)getLensComponentManagerForImageProcessContext:(id)arg1;
- (id)initWithLensDownloadableContent:(id)arg1 trackingEnabled:(_Bool)arg2 poolSize:(unsigned long long)arg3;
- (void)returnLensComponentManager:(id)arg1 imageProcessContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

