/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSFileManager.h"

@interface NSFileManager (NSFileManagerAdditions)
- (id)createUniqueDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
- (BOOL)canWriteToDirectoryAtPath:(id)arg1;
- (BOOL)canWriteToFileAtPath:(id)arg1;
- (long long)fileSizeAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (id)fileModificationDateAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (id)pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2;
- (void)deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3;
- (BOOL)isAlias:(id)arg1;
- (id)destinationOfAliasAtPath:(id)arg1;
- (id)pathByResolvingAliasesInPath:(id)arg1;
- (id)localizedFullPath:(id)arg1;
- (id)pathByUniquingPath:(id)arg1;
- (id)uniquePathInDirectory:(id)arg1 withName:(id)arg2 extension:(id)arg3;
- (id)mf_subpathsOfDirectoryAtPath:(id)arg1;
@end

