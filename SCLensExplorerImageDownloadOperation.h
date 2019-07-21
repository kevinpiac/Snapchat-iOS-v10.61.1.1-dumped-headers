//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSURL, SCFuture, SCPromise;
@protocol SCRequestManager;

@interface SCLensExplorerImageDownloadOperation : NSOperation
{
    id <SCRequestManager> _requestManager;
    SCPromise *_promise;
    NSURL *_imageURL;
    SCFuture *_downloadResult;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCFuture *downloadResult; // @synthesize downloadResult=_downloadResult;
- (id)initWithRequestManager:(id)arg1 imageURL:(id)arg2;
- (void)main;

@end

