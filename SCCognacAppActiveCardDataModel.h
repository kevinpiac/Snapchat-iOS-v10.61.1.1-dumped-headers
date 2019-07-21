//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SCCognacAppActiveCardDataModel : NSObject <NSCopying>
{
    NSString *_conversationId;
    NSString *_appId;
    NSString *_appInstanceId;
    NSURL *_appCoverImageURL;
    NSURL *_appLogoImageURL;
    NSArray *_participantUsernames;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *appCoverImageURL; // @synthesize appCoverImageURL=_appCoverImageURL;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, copy, nonatomic) NSString *appInstanceId; // @synthesize appInstanceId=_appInstanceId;
@property(readonly, copy, nonatomic) NSURL *appLogoImageURL; // @synthesize appLogoImageURL=_appLogoImageURL;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithConversationId:(id)arg1 appId:(id)arg2 appInstanceId:(id)arg3 appCoverImageURL:(id)arg4 appLogoImageURL:(id)arg5 participantUsernames:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *participantUsernames; // @synthesize participantUsernames=_participantUsernames;

@end
