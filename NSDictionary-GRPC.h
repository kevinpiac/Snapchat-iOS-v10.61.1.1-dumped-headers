//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (GRPC)
+ (id)grpc_dictionaryFromMetadata:(struct grpc_metadata *)arg1 count:(unsigned long long)arg2;
+ (id)grpc_dictionaryFromMetadataArray:(CDStruct_6f820e53)arg1;
- (struct grpc_metadata *)grpc_metadataArray;
@end

