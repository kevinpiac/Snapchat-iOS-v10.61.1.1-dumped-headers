//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, WebViewJavascriptBridgeBaseDelegate;

@interface WebViewJavascriptBridgeBase : NSObject
{
    id _webViewDelegate;
    long long _uniqueId;
    NSObject<OS_dispatch_queue> *_messageDispatchQueue;
    id <WebViewJavascriptBridgeBaseDelegate> _delegate;
    NSMutableArray *_startupMessageQueue;
    NSMutableDictionary *_responseCallbacks;
    NSMutableDictionary *_messageHandlers;
    CDUnknownBlockType _messageHandler;
}

+ (void)enableLogging;
+ (void)setLogMaxLength:(int)arg1;
- (void).cxx_destruct;
- (id)_deserializeMessageJSON:(id)arg1;
- (void)_dispatchMessage:(struct NSDictionary *)arg1;
- (void)_evaluateJavascript:(id)arg1;
- (void)_log:(id)arg1 json:(id)arg2;
- (void)_queueMessage:(struct NSDictionary *)arg1;
- (id)_serializeMessage:(id)arg1 pretty:(_Bool)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <WebViewJavascriptBridgeBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disableJavscriptAlertBoxSafetyTimeout;
- (void)flushMessageQueue:(id)arg1;
- (id)init;
- (void)injectJavascriptFile;
- (_Bool)isBridgeLoadedURL:(id)arg1;
- (_Bool)isQueueMessageURL:(id)arg1;
- (_Bool)isSchemeMatch:(id)arg1;
- (_Bool)isWebViewJavascriptBridgeURL:(id)arg1;
- (void)logUnkownMessage:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) NSMutableDictionary *messageHandlers; // @synthesize messageHandlers=_messageHandlers;
- (void)reset;
@property(retain, nonatomic) NSMutableDictionary *responseCallbacks; // @synthesize responseCallbacks=_responseCallbacks;
- (void)sendData:(id)arg1 responseCallback:(CDUnknownBlockType)arg2 handlerName:(id)arg3;
@property(retain, nonatomic) NSMutableArray *startupMessageQueue; // @synthesize startupMessageQueue=_startupMessageQueue;
- (id)webViewJavascriptCheckCommand;
- (id)webViewJavascriptFetchQueyCommand;

@end

