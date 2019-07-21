//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject, NSString, SOJUSticker;
@protocol OS_dispatch_queue, SCCanceling, SCStickerProtocol;

@protocol SCChatStickerImageFetching <NSObject>
- (id <SCCanceling>)fetchStickerImageWithSticker:(SOJUSticker *)arg1 contexts:(NSArray *)arg2 willAcceptLowRes:(_Bool)arg3 isDecoded:(_Bool)arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completionBlock:(void (^)(UIImage *, _Bool))arg6;
- (id <SCCanceling>)fetchThumbnailImageWithSticker:(SOJUSticker *)arg1 contexts:(NSArray *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(void (^)(UIImage *))arg4;
- (id <SCCanceling>)fetchThumbnailImageWithStickerProtocol:(id <SCStickerProtocol>)arg1 contexts:(NSArray *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(void (^)(UIImage *))arg4;
- (void)getSnapReplyStickerImageFromStickerId:(NSString *)arg1 completion:(void (^)(UIImage *))arg2;
@end

