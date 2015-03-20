/*
  File autogenerated by gengetopt version 2.22.6
  generated with the following command:
  gengetopt -i server/src/tools/sxadm/cmd_node.ggo --output-dir server/src/tools/sxadm --unamed-opts --no-handle-version --no-handle-error --file-name=cmd_node --func-name=node_cmdline_parser --arg-struct-name=node_args_info

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FIX_UNUSED
#define FIX_UNUSED(X) (void) (X) /* avoid warnings for unused params */
#endif

#include <getopt.h>

#include "cmd_node.h"

const char *node_args_info_purpose = "";

const char *node_args_info_usage = "Usage: sxadm node <MODE> [OPTIONS]... <STORAGE_PATH>";

const char *node_args_info_versiontext = "";

const char *node_args_info_description = "";

const char *node_args_info_full_help[] = {
  "  -h, --help                 Print help and exit",
  "      --full-help            Print help, including hidden options, and exit",
  "  -V, --version              Print version and exit",
  "\n Group: MODE",
  "  -N, --new                  Creates a new local SX node in STORAGE_PATH",
  "  -I, --info                 Print details about the local node in STORAGE_PATH",
  "  -C, --check                Perform sanity check on the local node in\n                               STORAGE_PATH",
  "  -E, --extract=DESTPATH     Extract all files from the local node in\n                               STORAGE_PATH to DESTPATH",
  "  -r, --rename-cluster=NAME  Set a new name for an SX cluster",
  "\nNew node options:",
  "  -k, --cluster-key=FILE     File containing a pre-generated cluster\n                               authentication token or stdin if \"-\" is given\n                               (default autogenerate token).",
  "  -b, --batch-mode           Turn off interactive confirmations and assume yes\n                               for all questions",
  "      --owner=user[:group]   Set ownership of storage to user[:group]",
  "  -u, --cluster-uuid=UUID    The SX cluster UUID (default autogenerate UUID).",
  "NOTE: all nodes of an SX cluster must be created with the same UUID and the\nsame authentication token.",
  "\nCommon options:",
  "  -H, --human-readable       Print human readable sizes  (default=off)",
  "  -D, --debug                Enable debug messages  (default=off)",
    0
};

static void
init_help_array(void)
{
  node_args_info_help[0] = node_args_info_full_help[0];
  node_args_info_help[1] = node_args_info_full_help[1];
  node_args_info_help[2] = node_args_info_full_help[2];
  node_args_info_help[3] = node_args_info_full_help[3];
  node_args_info_help[4] = node_args_info_full_help[4];
  node_args_info_help[5] = node_args_info_full_help[5];
  node_args_info_help[6] = node_args_info_full_help[6];
  node_args_info_help[7] = node_args_info_full_help[9];
  node_args_info_help[8] = node_args_info_full_help[10];
  node_args_info_help[9] = node_args_info_full_help[11];
  node_args_info_help[10] = node_args_info_full_help[12];
  node_args_info_help[11] = node_args_info_full_help[14];
  node_args_info_help[12] = node_args_info_full_help[15];
  node_args_info_help[13] = node_args_info_full_help[16];
  node_args_info_help[14] = node_args_info_full_help[17];
  node_args_info_help[15] = 0; 
  
}

const char *node_args_info_help[16];

typedef enum {ARG_NO
  , ARG_FLAG
  , ARG_STRING
} node_cmdline_parser_arg_type;

static
void clear_given (struct node_args_info *args_info);
static
void clear_args (struct node_args_info *args_info);

static int
node_cmdline_parser_internal (int argc, char **argv, struct node_args_info *args_info,
                        struct node_cmdline_parser_params *params, const char *additional_error);

static int
node_cmdline_parser_required2 (struct node_args_info *args_info, const char *prog_name, const char *additional_error);

static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct node_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->full_help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->new_given = 0 ;
  args_info->info_given = 0 ;
  args_info->check_given = 0 ;
  args_info->extract_given = 0 ;
  args_info->rename_cluster_given = 0 ;
  args_info->cluster_key_given = 0 ;
  args_info->batch_mode_given = 0 ;
  args_info->owner_given = 0 ;
  args_info->cluster_uuid_given = 0 ;
  args_info->human_readable_given = 0 ;
  args_info->debug_given = 0 ;
  args_info->MODE_group_counter = 0 ;
}

static
void clear_args (struct node_args_info *args_info)
{
  FIX_UNUSED (args_info);
  args_info->extract_arg = NULL;
  args_info->extract_orig = NULL;
  args_info->rename_cluster_arg = NULL;
  args_info->rename_cluster_orig = NULL;
  args_info->cluster_key_arg = NULL;
  args_info->cluster_key_orig = NULL;
  args_info->owner_arg = NULL;
  args_info->owner_orig = NULL;
  args_info->cluster_uuid_arg = NULL;
  args_info->cluster_uuid_orig = NULL;
  args_info->human_readable_flag = 0;
  args_info->debug_flag = 0;
  
}

static
void init_args_info(struct node_args_info *args_info)
{

  init_help_array(); 
  args_info->help_help = node_args_info_full_help[0] ;
  args_info->full_help_help = node_args_info_full_help[1] ;
  args_info->version_help = node_args_info_full_help[2] ;
  args_info->new_help = node_args_info_full_help[4] ;
  args_info->info_help = node_args_info_full_help[5] ;
  args_info->check_help = node_args_info_full_help[6] ;
  args_info->extract_help = node_args_info_full_help[7] ;
  args_info->rename_cluster_help = node_args_info_full_help[8] ;
  args_info->cluster_key_help = node_args_info_full_help[10] ;
  args_info->batch_mode_help = node_args_info_full_help[11] ;
  args_info->owner_help = node_args_info_full_help[12] ;
  args_info->cluster_uuid_help = node_args_info_full_help[13] ;
  args_info->human_readable_help = node_args_info_full_help[16] ;
  args_info->debug_help = node_args_info_full_help[17] ;
  
}

void
node_cmdline_parser_print_version (void)
{
  printf ("%s %s\n",
     (strlen(NODE_CMDLINE_PARSER_PACKAGE_NAME) ? NODE_CMDLINE_PARSER_PACKAGE_NAME : NODE_CMDLINE_PARSER_PACKAGE),
     NODE_CMDLINE_PARSER_VERSION);

  if (strlen(node_args_info_versiontext) > 0)
    printf("\n%s\n", node_args_info_versiontext);
}

static void print_help_common(void) {
  node_cmdline_parser_print_version ();

  if (strlen(node_args_info_purpose) > 0)
    printf("\n%s\n", node_args_info_purpose);

  if (strlen(node_args_info_usage) > 0)
    printf("\n%s\n", node_args_info_usage);

  printf("\n");

  if (strlen(node_args_info_description) > 0)
    printf("%s\n\n", node_args_info_description);
}

void
node_cmdline_parser_print_help (void)
{
  int i = 0;
  print_help_common();
  while (node_args_info_help[i])
    printf("%s\n", node_args_info_help[i++]);
}

void
node_cmdline_parser_print_full_help (void)
{
  int i = 0;
  print_help_common();
  while (node_args_info_full_help[i])
    printf("%s\n", node_args_info_full_help[i++]);
}

void
node_cmdline_parser_init (struct node_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);

  args_info->inputs = 0;
  args_info->inputs_num = 0;
}

void
node_cmdline_parser_params_init(struct node_cmdline_parser_params *params)
{
  if (params)
    { 
      params->override = 0;
      params->initialize = 1;
      params->check_required = 1;
      params->check_ambiguity = 0;
      params->print_errors = 1;
    }
}

struct node_cmdline_parser_params *
node_cmdline_parser_params_create(void)
{
  struct node_cmdline_parser_params *params = 
    (struct node_cmdline_parser_params *)malloc(sizeof(struct node_cmdline_parser_params));
  node_cmdline_parser_params_init(params);  
  return params;
}

static void
free_string_field (char **s)
{
  if (*s)
    {
      free (*s);
      *s = 0;
    }
}


static void
node_cmdline_parser_release (struct node_args_info *args_info)
{
  unsigned int i;
  free_string_field (&(args_info->extract_arg));
  free_string_field (&(args_info->extract_orig));
  free_string_field (&(args_info->rename_cluster_arg));
  free_string_field (&(args_info->rename_cluster_orig));
  free_string_field (&(args_info->cluster_key_arg));
  free_string_field (&(args_info->cluster_key_orig));
  free_string_field (&(args_info->owner_arg));
  free_string_field (&(args_info->owner_orig));
  free_string_field (&(args_info->cluster_uuid_arg));
  free_string_field (&(args_info->cluster_uuid_orig));
  
  
  for (i = 0; i < args_info->inputs_num; ++i)
    free (args_info->inputs [i]);

  if (args_info->inputs_num)
    free (args_info->inputs);

  clear_given (args_info);
}


static void
write_into_file(FILE *outfile, const char *opt, const char *arg, const char *values[])
{
  FIX_UNUSED (values);
  if (arg) {
    fprintf(outfile, "%s=\"%s\"\n", opt, arg);
  } else {
    fprintf(outfile, "%s\n", opt);
  }
}


int
node_cmdline_parser_dump(FILE *outfile, struct node_args_info *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", NODE_CMDLINE_PARSER_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->full_help_given)
    write_into_file(outfile, "full-help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->new_given)
    write_into_file(outfile, "new", 0, 0 );
  if (args_info->info_given)
    write_into_file(outfile, "info", 0, 0 );
  if (args_info->check_given)
    write_into_file(outfile, "check", 0, 0 );
  if (args_info->extract_given)
    write_into_file(outfile, "extract", args_info->extract_orig, 0);
  if (args_info->rename_cluster_given)
    write_into_file(outfile, "rename-cluster", args_info->rename_cluster_orig, 0);
  if (args_info->cluster_key_given)
    write_into_file(outfile, "cluster-key", args_info->cluster_key_orig, 0);
  if (args_info->batch_mode_given)
    write_into_file(outfile, "batch-mode", 0, 0 );
  if (args_info->owner_given)
    write_into_file(outfile, "owner", args_info->owner_orig, 0);
  if (args_info->cluster_uuid_given)
    write_into_file(outfile, "cluster-uuid", args_info->cluster_uuid_orig, 0);
  if (args_info->human_readable_given)
    write_into_file(outfile, "human-readable", 0, 0 );
  if (args_info->debug_given)
    write_into_file(outfile, "debug", 0, 0 );
  

  i = EXIT_SUCCESS;
  return i;
}

int
node_cmdline_parser_file_save(const char *filename, struct node_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", NODE_CMDLINE_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = node_cmdline_parser_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
node_cmdline_parser_free (struct node_args_info *args_info)
{
  node_cmdline_parser_release (args_info);
}

/** @brief replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = 0;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

static void
reset_group_MODE(struct node_args_info *args_info)
{
  if (! args_info->MODE_group_counter)
    return;
  
  args_info->new_given = 0 ;
  args_info->info_given = 0 ;
  args_info->check_given = 0 ;
  args_info->extract_given = 0 ;
  free_string_field (&(args_info->extract_arg));
  free_string_field (&(args_info->extract_orig));
  args_info->rename_cluster_given = 0 ;
  free_string_field (&(args_info->rename_cluster_arg));
  free_string_field (&(args_info->rename_cluster_orig));

  args_info->MODE_group_counter = 0;
}

int
node_cmdline_parser (int argc, char **argv, struct node_args_info *args_info)
{
  return node_cmdline_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
node_cmdline_parser_ext (int argc, char **argv, struct node_args_info *args_info,
                   struct node_cmdline_parser_params *params)
{
  int result;
  result = node_cmdline_parser_internal (argc, argv, args_info, params, 0);

  return result;
}

int
node_cmdline_parser2 (int argc, char **argv, struct node_args_info *args_info, int override, int initialize, int check_required)
{
  int result;
  struct node_cmdline_parser_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = node_cmdline_parser_internal (argc, argv, args_info, &params, 0);

  return result;
}

int
node_cmdline_parser_required (struct node_args_info *args_info, const char *prog_name)
{
  int result = EXIT_SUCCESS;

  if (node_cmdline_parser_required2(args_info, prog_name, 0) > 0)
    result = EXIT_FAILURE;

  return result;
}

int
node_cmdline_parser_required2 (struct node_args_info *args_info, const char *prog_name, const char *additional_error)
{
  int error_occurred = 0;
  FIX_UNUSED (additional_error);

  /* checks for required options */
  if (args_info->MODE_group_counter == 0)
    {
      fprintf (stderr, "%s: %d options of group MODE were given. One is required%s.\n", prog_name, args_info->MODE_group_counter, (additional_error ? additional_error : ""));
      error_occurred = 1;
    }
  

  /* checks for dependences among options */
  if (args_info->cluster_key_given && ! args_info->new_given)
    {
      fprintf (stderr, "%s: '--cluster-key' ('-k') option depends on option 'new'%s\n", prog_name, (additional_error ? additional_error : ""));
      error_occurred = 1;
    }
  if (args_info->batch_mode_given && ! args_info->new_given)
    {
      fprintf (stderr, "%s: '--batch-mode' ('-b') option depends on option 'new'%s\n", prog_name, (additional_error ? additional_error : ""));
      error_occurred = 1;
    }
  if (args_info->cluster_uuid_given && ! args_info->new_given)
    {
      fprintf (stderr, "%s: '--cluster-uuid' ('-u') option depends on option 'new'%s\n", prog_name, (additional_error ? additional_error : ""));
      error_occurred = 1;
    }

  return error_occurred;
}


static char *package_name = 0;

/**
 * @brief updates an option
 * @param field the generic pointer to the field to update
 * @param orig_field the pointer to the orig field
 * @param field_given the pointer to the number of occurrence of this option
 * @param prev_given the pointer to the number of occurrence already seen
 * @param value the argument for this option (if null no arg was specified)
 * @param possible_values the possible values for this option (if specified)
 * @param default_value the default value (in case the option only accepts fixed values)
 * @param arg_type the type of this option
 * @param check_ambiguity @see node_cmdline_parser_params.check_ambiguity
 * @param override @see node_cmdline_parser_params.override
 * @param no_free whether to free a possible previous value
 * @param multiple_option whether this is a multiple option
 * @param long_opt the corresponding long option
 * @param short_opt the corresponding short option (or '-' if none)
 * @param additional_error possible further error specification
 */
static
int update_arg(void *field, char **orig_field,
               unsigned int *field_given, unsigned int *prev_given, 
               char *value, const char *possible_values[],
               const char *default_value,
               node_cmdline_parser_arg_type arg_type,
               int check_ambiguity, int override,
               int no_free, int multiple_option,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *stop_char = 0;
  const char *val = value;
  int found;
  char **string_field;
  FIX_UNUSED (field);

  stop_char = 0;
  found = 0;

  if (!multiple_option && prev_given && (*prev_given || (check_ambiguity && *field_given)))
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: `--%s' (`-%c') option given more than once%s\n", 
               package_name, long_opt, short_opt,
               (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: `--%s' option given more than once%s\n", 
               package_name, long_opt,
               (additional_error ? additional_error : ""));
      return 1; /* failure */
    }

  FIX_UNUSED (default_value);
    
  if (field_given && *field_given && ! override)
    return 0;
  if (prev_given)
    (*prev_given)++;
  if (field_given)
    (*field_given)++;
  if (possible_values)
    val = possible_values[found];

  switch(arg_type) {
  case ARG_FLAG:
    *((int *)field) = !*((int *)field);
    break;
  case ARG_STRING:
    if (val) {
      string_field = (char **)field;
      if (!no_free && *string_field)
        free (*string_field); /* free previous string */
      *string_field = gengetopt_strdup (val);
    }
    break;
  default:
    break;
  };


  /* store the original value */
  switch(arg_type) {
  case ARG_NO:
  case ARG_FLAG:
    break;
  default:
    if (value && orig_field) {
      if (no_free) {
        *orig_field = value;
      } else {
        if (*orig_field)
          free (*orig_field); /* free previous string */
        *orig_field = gengetopt_strdup (value);
      }
    }
  };

  return 0; /* OK */
}


int
node_cmdline_parser_internal (
  int argc, char **argv, struct node_args_info *args_info,
                        struct node_cmdline_parser_params *params, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  int error_occurred = 0;
  struct node_args_info local_args_info;
  
  int override;
  int initialize;
  int check_required;
  int check_ambiguity;
  
  package_name = argv[0];
  
  override = params->override;
  initialize = params->initialize;
  check_required = params->check_required;
  check_ambiguity = params->check_ambiguity;

  if (initialize)
    node_cmdline_parser_init (args_info);

  node_cmdline_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 'h' },
        { "full-help",	0, NULL, 0 },
        { "version",	0, NULL, 'V' },
        { "new",	0, NULL, 'N' },
        { "info",	0, NULL, 'I' },
        { "check",	0, NULL, 'C' },
        { "extract",	1, NULL, 'E' },
        { "rename-cluster",	1, NULL, 'r' },
        { "cluster-key",	1, NULL, 'k' },
        { "batch-mode",	0, NULL, 'b' },
        { "owner",	1, NULL, 0 },
        { "cluster-uuid",	1, NULL, 'u' },
        { "human-readable",	0, NULL, 'H' },
        { "debug",	0, NULL, 'D' },
        { 0,  0, 0, 0 }
      };

      c = getopt_long (argc, argv, "hVNICE:r:k:bu:HD", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* Print help and exit.  */
          node_cmdline_parser_print_help ();
          node_cmdline_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 'V':	/* Print version and exit.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->version_given),
              &(local_args_info.version_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "version", 'V',
              additional_error))
            goto failure;
          node_cmdline_parser_free (&local_args_info);
          return 0;
        
          break;
        case 'N':	/* Creates a new local SX node in STORAGE_PATH.  */
        
          if (args_info->MODE_group_counter && override)
            reset_group_MODE (args_info);
          args_info->MODE_group_counter += 1;
        
          if (update_arg( 0 , 
               0 , &(args_info->new_given),
              &(local_args_info.new_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "new", 'N',
              additional_error))
            goto failure;
        
          break;
        case 'I':	/* Print details about the local node in STORAGE_PATH.  */
        
          if (args_info->MODE_group_counter && override)
            reset_group_MODE (args_info);
          args_info->MODE_group_counter += 1;
        
          if (update_arg( 0 , 
               0 , &(args_info->info_given),
              &(local_args_info.info_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "info", 'I',
              additional_error))
            goto failure;
        
          break;
        case 'C':	/* Perform sanity check on the local node in STORAGE_PATH.  */
        
          if (args_info->MODE_group_counter && override)
            reset_group_MODE (args_info);
          args_info->MODE_group_counter += 1;
        
          if (update_arg( 0 , 
               0 , &(args_info->check_given),
              &(local_args_info.check_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "check", 'C',
              additional_error))
            goto failure;
        
          break;
        case 'E':	/* Extract all files from the local node in STORAGE_PATH to DESTPATH.  */
        
          if (args_info->MODE_group_counter && override)
            reset_group_MODE (args_info);
          args_info->MODE_group_counter += 1;
        
          if (update_arg( (void *)&(args_info->extract_arg), 
               &(args_info->extract_orig), &(args_info->extract_given),
              &(local_args_info.extract_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "extract", 'E',
              additional_error))
            goto failure;
        
          break;
        case 'r':	/* Set a new name for an SX cluster.  */
        
          if (args_info->MODE_group_counter && override)
            reset_group_MODE (args_info);
          args_info->MODE_group_counter += 1;
        
          if (update_arg( (void *)&(args_info->rename_cluster_arg), 
               &(args_info->rename_cluster_orig), &(args_info->rename_cluster_given),
              &(local_args_info.rename_cluster_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "rename-cluster", 'r',
              additional_error))
            goto failure;
        
          break;
        case 'k':	/* File containing a pre-generated cluster authentication token or stdin if \"-\" is given (default autogenerate token)..  */
        
        
          if (update_arg( (void *)&(args_info->cluster_key_arg), 
               &(args_info->cluster_key_orig), &(args_info->cluster_key_given),
              &(local_args_info.cluster_key_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "cluster-key", 'k',
              additional_error))
            goto failure;
        
          break;
        case 'b':	/* Turn off interactive confirmations and assume yes for all questions.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->batch_mode_given),
              &(local_args_info.batch_mode_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "batch-mode", 'b',
              additional_error))
            goto failure;
        
          break;
        case 'u':	/* The SX cluster UUID (default autogenerate UUID)..  */
        
        
          if (update_arg( (void *)&(args_info->cluster_uuid_arg), 
               &(args_info->cluster_uuid_orig), &(args_info->cluster_uuid_given),
              &(local_args_info.cluster_uuid_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "cluster-uuid", 'u',
              additional_error))
            goto failure;
        
          break;
        case 'H':	/* Print human readable sizes.  */
        
        
          if (update_arg((void *)&(args_info->human_readable_flag), 0, &(args_info->human_readable_given),
              &(local_args_info.human_readable_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "human-readable", 'H',
              additional_error))
            goto failure;
        
          break;
        case 'D':	/* Enable debug messages.  */
        
        
          if (update_arg((void *)&(args_info->debug_flag), 0, &(args_info->debug_given),
              &(local_args_info.debug_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "debug", 'D',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
          if (strcmp (long_options[option_index].name, "full-help") == 0) {
            node_cmdline_parser_print_full_help ();
            node_cmdline_parser_free (&local_args_info);
            exit (EXIT_SUCCESS);
          }

          /* Set ownership of storage to user[:group].  */
          if (strcmp (long_options[option_index].name, "owner") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->owner_arg), 
                 &(args_info->owner_orig), &(args_info->owner_given),
                &(local_args_info.owner_given), optarg, 0, 0, ARG_STRING,
                check_ambiguity, override, 0, 0,
                "owner", '-',
                additional_error))
              goto failure;
          
          }
          
          break;
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", NODE_CMDLINE_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */

  if (args_info->MODE_group_counter > 1)
    {
      fprintf (stderr, "%s: %d options of group MODE were given. One is required%s.\n", argv[0], args_info->MODE_group_counter, (additional_error ? additional_error : ""));
      error_occurred = 1;
    }
  


  if (check_required)
    {
      error_occurred += node_cmdline_parser_required2 (args_info, argv[0], additional_error);
    }

  node_cmdline_parser_release (&local_args_info);

  if ( error_occurred )
    return (EXIT_FAILURE);

  if (optind < argc)
    {
      int i = 0 ;
      int found_prog_name = 0;
      /* whether program name, i.e., argv[0], is in the remaining args
         (this may happen with some implementations of getopt,
          but surely not with the one included by gengetopt) */

      i = optind;
      while (i < argc)
        if (argv[i++] == argv[0]) {
          found_prog_name = 1;
          break;
        }
      i = 0;

      args_info->inputs_num = argc - optind - found_prog_name;
      args_info->inputs =
        (char **)(malloc ((args_info->inputs_num)*sizeof(char *))) ;
      while (optind < argc)
        if (argv[optind++] != argv[0])
          args_info->inputs[ i++ ] = gengetopt_strdup (argv[optind-1]) ;
    }

  return 0;

failure:
  
  node_cmdline_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}
