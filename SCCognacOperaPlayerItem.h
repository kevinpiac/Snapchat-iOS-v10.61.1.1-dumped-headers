//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCCognacContentUpdateInfo, SCOperaWebAppImageResources;

@interface SCCognacOperaPlayerItem : NSObject
{
    _Bool _obfuscatedIdentity;
    _Bool _supportLoadingScreen;
    NSString *_appId;
    NSString *_buildId;
    NSString *_contentURL;
    NSString *_resourceBundleURL;
    NSString *_privacyPolicyURL;
    NSString *_termsOfServiceURL;
    NSString *_appName;
    NSArray *_presentUsers;
    NSString *_sessionId;
    NSString *_conversationId;
    NSString *_conversationName;
    SCOperaWebAppImageResources *_imageResources;
    SCCognacContentUpdateInfo *_contentUpdateInfo;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, copy, nonatomic) NSString *buildId; // @synthesize buildId=_buildId;
@property(readonly, copy, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) SCCognacContentUpdateInfo *contentUpdateInfo; // @synthesize contentUpdateInfo=_contentUpdateInfo;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *conversationName; // @synthesize conversationName=_conversationName;
@property(readonly, copy, nonatomic) SCOperaWebAppImageResources *imageResources; // @synthesize imageResources=_imageResources;
- (id)initWithAppId:(id)arg1 buildId:(id)arg2 contentURL:(id)arg3 contentUpdateInfo:(id)arg4 resourceBundleURL:(id)arg5 privacyPolicyURL:(id)arg6 termsOfServiceURL:(id)arg7 appName:(id)arg8 imageResources:(id)arg9;
- (id)initWithAppId:(id)arg1 buildId:(id)arg2 contentURL:(id)arg3 contentUpdateInfo:(id)arg4 resourceBundleURL:(id)arg5 privacyPolicyURL:(id)arg6 termsOfServiceURL:(id)arg7 appName:(id)arg8 imageResources:(id)arg9 presentUsers:(id)arg10 sessionId:(id)arg11 conversationId:(id)arg12 conversationName:(id)arg13 obfuscatedIdentity:(_Bool)arg14 supportLoadingScreen:(_Bool)arg15;
@property(readonly, nonatomic) _Bool obfuscatedIdentity; // @synthesize obfuscatedIdentity=_obfuscatedIdentity;
@property(readonly, copy, nonatomic) NSArray *presentUsers; // @synthesize presentUsers=_presentUsers;
@property(readonly, copy, nonatomic) NSString *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;
@property(readonly, copy, nonatomic) NSString *resourceBundleURL; // @synthesize resourceBundleURL=_resourceBundleURL;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) _Bool supportLoadingScreen; // @synthesize supportLoadingScreen=_supportLoadingScreen;
@property(readonly, copy, nonatomic) NSString *termsOfServiceURL; // @synthesize termsOfServiceURL=_termsOfServiceURL;

@end

