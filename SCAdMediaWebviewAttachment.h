//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCAdMediaWebView;

@interface SCAdMediaWebviewAttachment : NSObject <NSCopying, NSCoding>
{
    _Bool _blockWebviewPreloading;
    _Bool _allowAutoFill;
    SCAdMediaWebView *_webview;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allowAutoFill; // @synthesize allowAutoFill=_allowAutoFill;
@property(readonly, nonatomic) _Bool blockWebviewPreloading; // @synthesize blockWebviewPreloading=_blockWebviewPreloading;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithWebview:(id)arg1 blockWebviewPreloading:(_Bool)arg2 allowAutoFill:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCAdMediaWebView *webview; // @synthesize webview=_webview;

@end

