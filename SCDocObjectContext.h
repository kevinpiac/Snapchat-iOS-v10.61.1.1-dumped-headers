//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCDocObjectContext : NSObject
{
}

- (id)initWithPath:(id)arg1 options:(CDStruct_69d7cc99)arg2 monitor:(id)arg3;
- (id)observe:(id)arg1 callbackQueue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (id)observeFetchedResult:(id)arg1 callbackQueue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (void)performChanges:(CDUnknownBlockType)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)shutdownAsynchronously:(CDUnknownBlockType)arg1;

@end

