//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface LSABitmoji3DData : NSObject
{
    NSString *_metadata;
    long long _requestStatus;
    NSDictionary *_friendmojiMetadataMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *friendmojiMetadataMap; // @synthesize friendmojiMetadataMap=_friendmojiMetadataMap;
- (id)initWithMetadata:(id)arg1 requestStatus:(long long)arg2 friendmojiMetadataMap:(id)arg3;
@property(readonly, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) long long requestStatus; // @synthesize requestStatus=_requestStatus;

@end
