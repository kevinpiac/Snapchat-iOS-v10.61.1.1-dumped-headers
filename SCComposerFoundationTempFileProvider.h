//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCComposerFoundationTempFileProviding-Protocol.h"

@class NSString, NSURL, SCQueuePerformer;

@interface SCComposerFoundationTempFileProvider : NSObject <SCComposerFoundationTempFileProviding>
{
    NSURL *_tempDirectory;
    SCQueuePerformer *_queuePerformer;
}

- (void).cxx_destruct;
- (void)getTempFileForDataWithData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

