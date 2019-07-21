//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, SCSearchAttachmentsClipboardProviderListenerAnnouncer;

@interface SCSearchAttachmentsClipboardProvider : NSObject
{
    SCSearchAttachmentsClipboardProviderListenerAnnouncer *_announcer;
    _Bool _isWebAttachmentRedirectEnabled;
    _Bool _clipboardIsValidURL;
    NSURL *_clipboardAttachmentURL;
}

- (void).cxx_destruct;
- (void)_fetchClipboardResult;
- (void)_updateClipboardResult;
- (void)_updateClipboardURL:(id)arg1 isValid:(_Bool)arg2;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) NSURL *clipboardAttachmentURL; // @synthesize clipboardAttachmentURL=_clipboardAttachmentURL;
@property(readonly, nonatomic) _Bool clipboardIsValidURL; // @synthesize clipboardIsValidURL=_clipboardIsValidURL;
@property(nonatomic) unsigned long long clipboardState;
- (id)initWithUserSession:(id)arg1;
- (void)removeListener:(id)arg1;

@end
