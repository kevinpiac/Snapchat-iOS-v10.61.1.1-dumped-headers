//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageDownloaderCancellable-Protocol.h"

@class NSString;
@protocol SCLegacyItemDownloaderHandling;

@interface SCCognacImageDownloaderCancellable : NSObject <SCImageDownloaderCancellable>
{
    id <SCLegacyItemDownloaderHandling> _itemDownloaderHandler;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithItemDownloaderHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

