//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCDeepLinkURL, SCScanCardTableViewCell, SCSnapKitProtoCreativeKitWebShareMetadata;
@protocol SCScanCardSnapKitDeepLinkProtocol;

@protocol SCScanCardSnapKitDeepLinkDelegate <NSObject>
- (void)snapKitDeepLinkCard:(SCScanCardTableViewCell<SCScanCardSnapKitDeepLinkProtocol> *)arg1 attachToSnapWithDeepLinkURL:(SCDeepLinkURL *)arg2 attachmentURLString:(NSString *)arg3 attachmentShareMetadata:(SCSnapKitProtoCreativeKitWebShareMetadata *)arg4;
- (void)snapKitDeepLinkCard:(SCScanCardTableViewCell<SCScanCardSnapKitDeepLinkProtocol> *)arg1 sendToChatWithDeepLinkURL:(SCDeepLinkURL *)arg2 attachmentURLString:(NSString *)arg3 attachmentShareMetadata:(SCSnapKitProtoCreativeKitWebShareMetadata *)arg4;
@end

